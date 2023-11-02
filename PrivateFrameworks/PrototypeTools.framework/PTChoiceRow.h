
@interface PTChoiceRow : PTSRow {
    NSString * _choiceIdentifier;
    <PTChoiceRowDataSource> * _dataSource;
    NSArray * _possibleShortTitles;
    NSArray * _possibleTitles;
    NSArray * _possibleValues;
}

@property (nonatomic, retain) NSString *choiceIdentifier;
@property (nonatomic) <PTChoiceRowDataSource> *dataSource;
@property (nonatomic, copy) NSArray *possibleShortTitles;
@property (nonatomic, copy) NSArray *possibleTitles;
@property (nonatomic, copy) NSArray *possibleValues;

// Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)choiceIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSource;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)indexPathForValue:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEncodable;
- (bool)isEqual:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)possibleShortTitles;
- (id)possibleShortTitles:(id)arg1;
- (id)possibleTitles;
- (id)possibleValues;
- (id)possibleValues:(id)arg1 titles:(id)arg2;
- (void)setChoiceIdentifier:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setPossibleShortTitles:(id)arg1;
- (void)setPossibleTitles:(id)arg1;
- (void)setPossibleValues:(id)arg1;
- (id)shortTitleForRow:(long long)arg1 inSection:(long long)arg2;
- (id)titleForRow:(long long)arg1 inSection:(long long)arg2;
- (id)titleForSection:(long long)arg1;
- (id)valueForRow:(long long)arg1 inSection:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (id)px_possibleValues:(id)arg1;
- (id)px_possibleValues:(id)arg1 formatter:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

- (id)pu_possibleValues:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI

- (id)defaultUIAction;
- (Class)tableViewCellClass;

@end
