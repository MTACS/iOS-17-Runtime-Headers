
@interface NSFileProviderPresenterInfo : NSObject <NSSecureCoding> {
    NSURL * changedURL;
    NSSet * observedUbiquityAttributes;
    struct { 
        unsigned int val[8]; 
    }  presenterAuditToken;
    NSString * presenterID;
}

@property (copy) NSURL *changedURL;
@property (readonly, copy) NSSet *observedUbiquityAttributes;
@property (readonly) struct { unsigned int x1[8]; } presenterAuditToken;
@property (readonly, copy) NSString *presenterID;

+ (id)infoWithPresenterID:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 observedUbiquityAttributes:(id)arg3;
+ (bool)supportsSecureCoding;

- (id)changedURL;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)observedUbiquityAttributes;
- (struct { unsigned int x1[8]; })presenterAuditToken;
- (id)presenterID;
- (void)setChangedURL:(id)arg1;

@end
