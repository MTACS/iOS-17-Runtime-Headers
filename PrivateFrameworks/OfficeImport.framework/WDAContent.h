
@interface WDAContent : NSObject <OADClient, OADLinkedTextClient, OADTextClient> {
    WDAAnchor * mAnchor;
    OADDrawable * mDrawable;
    WDATextBox * mTextBox;
    int  mTextType;
}

@property (nonatomic, readonly) WDAAnchor *anchor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property OADDrawable *drawable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)classForType:(unsigned short)arg1;

- (void).cxx_destruct;
- (id)anchor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)clearAnchor;
- (id)createAnchor;
- (id)createTextBoxWithDocument:(id)arg1 textType:(int)arg2;
- (id)description;
- (id)drawable;
- (bool)floating;
- (bool)hasBounds;
- (bool)hasText;
- (id)init;
- (bool)isLine;
- (bool)isLinked;
- (bool)isShape;
- (bool)isTopLevelObject;
- (unsigned long long)linkedTextBoxSupport;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDrawable:(id)arg1;
- (void)setTextBox:(id)arg1 document:(id)arg2;
- (void)setTextType:(int)arg1;
- (id)textBox;
- (int)textType;

@end
