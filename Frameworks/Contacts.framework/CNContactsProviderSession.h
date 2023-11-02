
@interface CNContactsProviderSession : NSObject <NSCopying, NSSecureCoding> {
    NSProgress * _progress;
    NSString * _synchronizationReason;
}

@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, copy) NSString *synchronizationReason;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)progress;
- (void)setProgress:(id)arg1;
- (void)setSynchronizationReason:(id)arg1;
- (id)synchronizationReason;

@end
