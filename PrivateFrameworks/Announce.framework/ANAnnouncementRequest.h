
@interface ANAnnouncementRequest : NSObject <NSSecureCoding> {
    NSString * _clientID;
    ANAnnouncementContent * _content;
    ANAnnouncementDestination * _destination;
}

@property (nonatomic, retain) NSString *clientID;
@property (nonatomic, readonly) ANAnnouncementContent *content;
@property (nonatomic, readonly) ANAnnouncementDestination *destination;

+ (id)requestWithContent:(id)arg1 destination:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientID;
- (id)content;
- (id)description;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1 destination:(id)arg2;
- (void)setClientID:(id)arg1;

@end
