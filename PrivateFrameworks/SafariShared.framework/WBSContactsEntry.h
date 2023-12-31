
@interface WBSContactsEntry : NSObject {
    CNContact * _contact;
}

@property (nonatomic, readonly) CNContact *contact;

+ (bool)_isContactsLabel:(id)arg1;
+ (bool)_isContactsProperty:(id)arg1;
+ (bool)_isValueAStringForContactsProperty:(id)arg1;
+ (id)_valueStringForValue:(id)arg1 wbsProperty:(id)arg2 wbsComponent:(id)arg3;
+ (id)_valueStringForValue:(id)arg1 wbsProperty:(id)arg2 wbsComponent:(id)arg3 atIndex:(unsigned long long)arg4;
+ (id)_valueStringForWBSComponent:(id)arg1 inAddress:(id)arg2;
+ (id)_valueStringForWBSComponent:(id)arg1 inInstantMessageAddress:(id)arg2;
+ (bool)isWBSProxyProperty:(id)arg1;
+ (id)localizedWBSPropertyOrLabel:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_numberOfValuesForWBSProperty:(id)arg1;
- (unsigned long long)_numberOfValuesForWBSProperty:(id)arg1 andContact:(id)arg2;
- (id)contact;
- (id)fullName;
- (id)initWithContact:(id)arg1;
- (id)valueForWBSProxyProperty:(id)arg1;
- (id)valueStringForWBSProperty:(id)arg1 wbsComponent:(id)arg2 atIndex:(unsigned long long)arg3;

@end
