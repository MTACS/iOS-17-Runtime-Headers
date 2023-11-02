
@interface BLSHPresentationDateSpecifier : NSObject <BLSPresentationDateSpecifying> {
    NSDate * _presentationDate;
    NSArray * _specifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *presentationDate;
@property (nonatomic, readonly) NSArray *specifiers;
@property (readonly) Class superclass;

+ (id)specifierWithPresentationDate:(id)arg1 specifiers:(id)arg2;

- (void).cxx_destruct;
- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (id)dateSpecifierForEnvironment:(id)arg1;
- (id)description;
- (void)enumerateDateSpecifiersUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)initWithPresentationDate:(id)arg1 specifiers:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)presentationDate;
- (id)specifiers;

@end
