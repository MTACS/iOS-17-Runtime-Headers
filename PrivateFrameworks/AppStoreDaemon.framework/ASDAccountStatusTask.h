
@interface ASDAccountStatusTask : NSObject <NSSecureCoding> {
    <ASDClipServiceBroker> * _broker;
    bool  _lookupFamilyInfoIfNecessary;
}

@property bool lookupFamilyInfoIfNecessary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)lookupFamilyInfoIfNecessary;
- (void)setLookupFamilyInfoIfNecessary:(bool)arg1;
- (void)statusWithCompletion:(id /* block */)arg1;

@end
