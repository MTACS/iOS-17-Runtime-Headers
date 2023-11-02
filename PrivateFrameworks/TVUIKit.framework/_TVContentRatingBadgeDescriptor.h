
@interface _TVContentRatingBadgeDescriptor : NSObject {
    NSString * _resourceName;
    bool  _templatedImage;
}

@property (nonatomic, readonly, copy) NSString *resourceName;
@property (getter=isTemplatedImage, nonatomic, readonly) bool templatedImage;

- (void).cxx_destruct;
- (id)initWithResourceName:(id)arg1 isTemplatedImage:(bool)arg2;
- (bool)isTemplatedImage;
- (id)resourceName;

@end
