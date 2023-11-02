
@interface VKFeedbackAttachment : NSObject {
    NSString * _fileName;
    bool  _isOptional;
    NSString * _label;
}

@property (nonatomic, readonly) NSString *fileName;
@property (nonatomic, readonly) bool isOptional;
@property (nonatomic, readonly) NSString *label;

- (void).cxx_destruct;
- (id)fileName;
- (id)initWithFileName:(id)arg1 label:(id)arg2 isOptional:(bool)arg3;
- (bool)isOptional;
- (id)label;

@end
