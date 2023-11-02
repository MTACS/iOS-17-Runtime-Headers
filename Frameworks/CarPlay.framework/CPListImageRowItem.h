
@interface CPListImageRowItem : NSObject <CPListItemPrivate, CPSelectableListItem, NSSecureCoding> {
    bool  _enabled;
    NSArray * _gridImagesSet;
    id /* block */  _handler;
    NSUUID * _identifier;
    id /* block */  _listImageRowHandler;
    CPListTemplate * _listTemplate;
    NSString * _text;
    id  _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) NSArray *gridImages;
@property (nonatomic, retain) NSArray *gridImagesSet;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, copy) id /* block */ listImageRowHandler;
@property (nonatomic) CPListTemplate *listTemplate;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) id userInfo;

+ (struct CGSize { double x1; double x2; })maximumImageSize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)encodeWithCoder:(id)arg1;
- (id)gridImages;
- (id)gridImagesSet;
- (id /* block */)handler;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 images:(id)arg2;
- (bool)isEnabled;
- (id /* block */)listImageRowHandler;
- (id)listTemplate;
- (void)setEnabled:(bool)arg1;
- (void)setGridImagesSet:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setListImageRowHandler:(id /* block */)arg1;
- (void)setListTemplate:(id)arg1;
- (void)setText:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)text;
- (void)updateImages:(id)arg1;
- (id)userInfo;

@end
