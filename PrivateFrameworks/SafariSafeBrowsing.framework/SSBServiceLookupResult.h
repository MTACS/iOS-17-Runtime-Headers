
@interface SSBServiceLookupResult : NSObject <NSCopying, NSSecureCoding> {
    struct LookupResult { 
        struct OptionSet<Backend::LookupResult::Type> { 
            unsigned int m_storage; 
        } type; 
        int provider; 
    }  _lookupResult;
}

@property (getter=isKnownToBeUnsafe, nonatomic, readonly) bool knownToBeUnsafe;
@property (nonatomic, readonly) NSURL *learnMoreURL;
@property (nonatomic, readonly) NSString *localizedProviderDisplayName;
@property (getter=isMalware, nonatomic, readonly) bool malware;
@property (nonatomic, readonly) NSString *malwareDetailsBaseURLString;
@property (getter=isPhishing, nonatomic, readonly) bool phishing;
@property (nonatomic, readonly) NSString *provider;
@property (nonatomic, readonly) NSString *reportAnErrorBaseURLString;
@property (getter=isUnwantedSoftware, nonatomic, readonly) bool unwantedSoftware;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (id)_initWithLookupResult:(struct LookupResult { struct OptionSet<Backend::LookupResult::Type> { unsigned int x_1_1_1; } x1; int x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isKnownToBeUnsafe;
- (bool)isMalware;
- (bool)isPhishing;
- (bool)isUnwantedSoftware;
- (id)learnMoreURL;
- (id)localizedProviderDisplayName;
- (id)malwareDetailsBaseURLString;
- (id)provider;
- (id)reportAnErrorBaseURLString;

@end
