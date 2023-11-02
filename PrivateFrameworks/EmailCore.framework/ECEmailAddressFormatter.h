
@interface ECEmailAddressFormatter : NSFormatter {
    bool  _shouldIncludeDisplayName;
    long long  _style;
}

@property (nonatomic) bool shouldIncludeDisplayName;

- (id)_groupListString:(id)arg1;
- (id)_stringFromEmailAddress:(id)arg1 includeDisplayName:(bool)arg2;
- (id)_stringFromEmailAddressConvertible:(id)arg1 includeDisplayName:(bool)arg2;
- (id)_stringFromEmailAddressList:(id)arg1 includeDisplayName:(bool)arg2;
- (id)_stringFromGroupEmailAddress:(id)arg1;
- (id)_stringFromMailboxAddress:(id)arg1 includeDisplayName:(bool)arg2;
- (id)emailAddressFromString:(id)arg1;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)init;
- (id)initWithStyle:(long long)arg1;
- (void)setShouldIncludeDisplayName:(bool)arg1;
- (bool)shouldIncludeDisplayName;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromEmailAddress:(id)arg1;
- (id)stringFromEmailAddressConvertible:(id)arg1;
- (id)stringFromEmailAddressList:(id)arg1;

@end
