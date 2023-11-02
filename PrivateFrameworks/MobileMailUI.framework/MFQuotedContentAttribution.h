
@interface MFQuotedContentAttribution : NSObject {
    NSString * _senderName;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *senderName;
@property (nonatomic, readonly) long long type;

+ (id)attributionWithSenderName:(id)arg1;
+ (id)noAttribution;
+ (id)unknownAttribution;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithType:(long long)arg1 senderName:(id)arg2;
- (id)senderName;
- (long long)type;

@end
