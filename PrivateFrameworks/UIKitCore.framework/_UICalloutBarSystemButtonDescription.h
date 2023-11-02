
@interface _UICalloutBarSystemButtonDescription : NSObject {
    SEL  m_action;
    id /* block */  m_configurationBlock;
    UIImage * m_image;
    NSString * m_title;
    int  m_type;
}

@property (nonatomic, readonly) SEL action;
@property (nonatomic, copy) id /* block */ configurationBlock;
@property (nonatomic, retain) NSString *title;

+ (id)buttonDescriptionWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3;
+ (id)buttonDescriptionWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3;
+ (id)buttonDescriptionWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 type:(int)arg4;

- (void).cxx_destruct;
- (SEL)action;
- (id /* block */)configurationBlock;
- (id)initWithTitle:(id)arg1 orImage:(id)arg2 action:(SEL)arg3 type:(int)arg4;
- (id)materializeButtonInView:(id)arg1 visualStyle:(id)arg2;
- (void)setConfigurationBlock:(id /* block */)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
