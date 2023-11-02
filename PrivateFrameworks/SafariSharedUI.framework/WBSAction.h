
@interface WBSAction : NSObject {
    id /* block */  _handler;
    NSString * _identifier;
    UIImage * _image;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)actionWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 handler:(id /* block */)arg4;
+ (id)toggleSectionExpandedAction;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)image;
- (bool)isEqual:(id)arg1;
- (id)makeUIAction;
- (void)performAction;
- (id)title;

@end
