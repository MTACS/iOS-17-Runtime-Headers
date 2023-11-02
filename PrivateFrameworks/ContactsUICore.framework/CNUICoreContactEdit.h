
@interface CNUICoreContactEdit : NSObject {
    CNContact * _modified;
    CNContact * _original;
}

@property (nonatomic, readonly) CNContact *modified;
@property (nonatomic, readonly) CNContact *original;
@property (nonatomic, readonly) bool originalAndModifiedDiffer;

- (void).cxx_destruct;
- (id)description;
- (id)editBySettingModifiedContact:(id)arg1;
- (unsigned long long)hash;
- (id)initWithContact:(id)arg1;
- (id)initWithOriginalContact:(id)arg1 modifiedContact:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)modified;
- (bool)modifiesContact:(id)arg1;
- (id)original;
- (bool)originalAndModifiedDiffer;

@end
