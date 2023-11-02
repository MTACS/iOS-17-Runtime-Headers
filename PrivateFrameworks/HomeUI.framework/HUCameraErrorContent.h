
@interface HUCameraErrorContent : NSObject {
    NSString * _descriptionText;
    NSString * _titleText;
}

@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, copy) NSString *titleText;

+ (id)errorWithTitle:(id)arg1 description:(id)arg2;

- (void).cxx_destruct;
- (id)descriptionText;
- (void)setDescriptionText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleText;

@end
