
@interface ANPlaybackCommand : NSObject <NSSecureCoding> {
    NSArray * _announcementIdentifiers;
    NSString * _clientIdentifier;
    unsigned long long  _operation;
    unsigned long long  _options;
}

@property (nonatomic, readonly) NSArray *announcementIdentifiers;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic) unsigned long long operation;
@property (nonatomic, readonly) unsigned long long options;

+ (id)nextCommand;
+ (id)playCommandWithOptions:(unsigned long long)arg1 announcementIdentifiers:(id)arg2;
+ (id)previousCommand;
+ (id)stopCommand;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)announcementIdentifiers;
- (id)clientIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaybackOperation:(unsigned long long)arg1 options:(unsigned long long)arg2 announcementIdentifiers:(id)arg3;
- (id)initWithPlaybackOperation:(unsigned long long)arg1 options:(unsigned long long)arg2 forRecipient:(id)arg3;
- (unsigned long long)operation;
- (unsigned long long)options;
- (void)setClientIdentifier:(id)arg1;
- (void)setOperation:(unsigned long long)arg1;

@end
