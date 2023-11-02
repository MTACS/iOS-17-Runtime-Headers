
@interface PTRow : NSObject <NSCopying, NSSecureCoding, PTSettingsKeyPathObserver> {
    PTRowAction * _action;
    NSPredicate * _condition;
    id /* block */  _externalCondition;
    NSString * _imageKeyPath;
    bool  _isEncodable;
    NSHashTable * _observers;
    PTSection * _section;
    PTSettings * _settings;
    UIImage * _staticImage;
    NSString * _staticTitle;
    NSString * _titleKeyPath;
    id /* block */  _unregisterBlock;
    id /* block */  _valueFormatter;
    id /* block */  _valueGetter;
    NSString * _valueKeyPath;
    id /* block */  _valueSetter;
    id /* block */  _valueValidatator;
}

@property (nonatomic, retain) PTRowAction *action;
@property (nonatomic, copy) NSPredicate *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ externalCondition;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *imageKeyPath;
@property (nonatomic) bool isEncodable;
@property (nonatomic) PTSection *section;
@property (nonatomic, retain) PTSettings *settings;
@property (nonatomic, retain) UIImage *staticImage;
@property (nonatomic, copy) NSString *staticTitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *titleKeyPath;
@property (nonatomic, copy) id /* block */ unregisterBlock;
@property (nonatomic, retain) id value;
@property (nonatomic, copy) id /* block */ valueFormatter;
@property (nonatomic, copy) id /* block */ valueGetter;
@property (nonatomic, copy) NSString *valueKeyPath;
@property (nonatomic, copy) id /* block */ valueSetter;
@property (nonatomic, copy) id /* block */ valueValidatator;

// Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools

+ (id)row;
+ (id)rowWithTitle:(id)arg1 valueGetter:(id /* block */)arg2 valueSetter:(id /* block */)arg3;
+ (id)rowWithTitle:(id)arg1 valueKeyPath:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_defaultAction;
- (void)_sendImageChanged;
- (void)_sendRowDidReload;
- (void)_sendTitleChanged;
- (void)_sendValueChanged;
- (id)_validatedValue:(id)arg1;
- (id)action;
- (id)action:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)childSettingsForKeyPath:(id)arg1;
- (id)condition;
- (id)condition:(id)arg1;
- (id)conditionFormat:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)externalCondition;
- (unsigned long long)hash;
- (id)image;
- (id)imageKeyPath;
- (id)imageKeyPath:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEncodable;
- (bool)isEqual:(id)arg1;
- (void)reloadRow;
- (void)removeObserver:(id)arg1;
- (id)section;
- (void)setAction:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setExternalCondition:(id /* block */)arg1;
- (void)setImageKeyPath:(id)arg1;
- (void)setIsEncodable:(bool)arg1;
- (void)setSection:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setStaticImage:(id)arg1;
- (void)setStaticTitle:(id)arg1;
- (void)setTitleKeyPath:(id)arg1;
- (void)setUnregisterBlock:(id /* block */)arg1;
- (void)setValue:(id)arg1;
- (void)setValueFormatter:(id /* block */)arg1;
- (void)setValueGetter:(id /* block */)arg1;
- (void)setValueKeyPath:(id)arg1;
- (void)setValueSetter:(id /* block */)arg1;
- (void)setValueValidatator:(id /* block */)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)staticImage;
- (id)staticImage:(id)arg1;
- (id)staticTitle;
- (id)staticTitle:(id)arg1;
- (id)title;
- (id)titleKeyPath;
- (id)titleKeyPath:(id)arg1;
- (id /* block */)unregisterBlock;
- (id)value;
- (id /* block */)valueFormatter;
- (id)valueFormatter:(id /* block */)arg1;
- (id /* block */)valueGetter;
- (id)valueKeyPath;
- (id)valueKeyPath:(id)arg1;
- (id /* block */)valueSetter;
- (id /* block */)valueValidatator;
- (id)valueValidator:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer

- (id)is_increment:(double)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_rowWithTitle:(id)arg1 action:(id /* block */)arg2;
+ (id)px_rowWithTitle:(id)arg1 asynchronousOutputProducer:(id /* block */)arg2;
+ (id)px_rowWithTitle:(id)arg1 continuousOutputProducer:(id /* block */)arg2;
+ (id)px_rowWithTitle:(id)arg1 output:(id /* block */)arg2;
+ (id)px_rowWithTitle:(id)arg1 postDismissalAction:(id /* block */)arg2;
+ (id)px_rowWithTitle:(id)arg1 urlString:(id)arg2;
+ (id)px_rowWithTitle:(id)arg1 valueKeyPath:(id)arg2 condition:(id)arg3;

- (id)px_conditionFormat:(id)arg1 possibleValues:(id)arg2;
- (id)px_increment:(double)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

+ (id)pu_rowWithTitle:(id)arg1 action:(id /* block */)arg2;
+ (id)pu_rowWithTitle:(id)arg1 asynchronousOutputProducer:(id /* block */)arg2;
+ (id)pu_rowWithTitle:(id)arg1 output:(id /* block */)arg2;
+ (id)pu_rowWithTitle:(id)arg1 settings:(id)arg2;
+ (id)pu_rowWithTitle:(id)arg1 settings:(id)arg2 condition:(id)arg3;
+ (id)pu_rowWithTitle:(id)arg1 settingsProvider:(id /* block */)arg2;
+ (id)pu_rowWithTitle:(id)arg1 settingsProvider:(id /* block */)arg2 isTransient:(bool)arg3;

- (id)pu_increment:(double)arg1;

// Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI

- (id)defaultUIAction;
- (Class)tableViewCellClass;

@end
