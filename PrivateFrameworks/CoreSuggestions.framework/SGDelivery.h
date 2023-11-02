
@interface SGDelivery : SGObject <NSSecureCoding> {
    NSString * _externalIdentifier;
    NSURL * _parentURL;
    unsigned long long  _provider;
    NSString * _trackingNumber;
}

@property (nonatomic, readonly) NSString *externalIdentifier;
@property (nonatomic, readonly) NSURL *parentURL;
@property (nonatomic, readonly) unsigned long long provider;
@property (nonatomic, readonly) NSString *trackingNumber;

// Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions

+ (unsigned long long)providerForString:(id)arg1;
+ (id)stringForProvider:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(id)arg1 origin:(id)arg2 parentURL:(id)arg3 provider:(unsigned long long)arg4 trackingNumber:(id)arg5;
- (id)parentURL;
- (unsigned long long)provider;
- (id)trackingNumber;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)deliveryForEntity:(id)arg1 origin:(id)arg2;
+ (id)deliveryForEntity:(id)arg1 store:(id)arg2;

@end
