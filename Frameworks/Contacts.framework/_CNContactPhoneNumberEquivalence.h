
@interface _CNContactPhoneNumberEquivalence : NSObject <_CNContactHandleStringEquivalenceStrategy> {
    char * _decomposedNumberDigits;
    struct { char *x1; char *x2; char *x3; unsigned int x4; char *x5; unsigned int x6; char *x7; unsigned int x8; } * _decomposedRepresentation;
    NSString * _rawString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)indexKeyForString:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPhoneNumberString:(id)arg1;
- (bool)isEquivalentToString:(id)arg1 strict:(bool*)arg2;
- (bool)isPhoneNumberEquivalent:(id)arg1 strict:(bool*)arg2;
- (bool)isRawStringEquivalent:(id)arg1;
- (bool)preparePhoneNumberRepresentation;

@end
