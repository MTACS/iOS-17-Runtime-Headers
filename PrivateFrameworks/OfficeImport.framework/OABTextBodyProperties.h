
@interface OABTextBodyProperties : NSObject

+ (void)readTextBodyProperties:(id)arg1 textBox:(const struct EshTextBox { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg2 useDefaults:(bool)arg3 state:(id)arg4;
+ (void)setAutoFit:(bool)arg1 textBodyProperties:(id)arg2;
+ (void)setIsAnchorCenter:(int)arg1 textBodyProperties:(id)arg2;
+ (void)setTextAnchor:(int)arg1 textBodyProperties:(id)arg2;
+ (void)setTextDirection:(int)arg1 textBodyProperties:(id)arg2;
+ (void)setTextFlow:(int)arg1 textBodyProperties:(id)arg2;
+ (void)setTextRotation:(int)arg1 textBodyProperties:(id)arg2;
+ (void)setWrap:(int)arg1 textBodyProperties:(id)arg2;
+ (void)writeTextBodyProperties:(id)arg1 toShapeBase:(void*)arg2 state:(id)arg3;

@end
