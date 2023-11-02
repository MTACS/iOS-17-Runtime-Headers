
@interface _PSContactSuggestionHandleAndApp : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appBundleId;
    NSString * _handle;
    NSNumber * _interactionMechanism;
}

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic, copy) NSNumber *interactionMechanism;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)interactionMechanism;
- (bool)isEqual:(id)arg1;
- (void)setAppBundleId:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setInteractionMechanism:(id)arg1;

@end
