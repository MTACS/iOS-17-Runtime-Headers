
@interface BMSharedPublishers : NSObject {
    NSArray * _publishers;
}

@property (nonatomic, readonly) NSArray *publishers;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPublishers:(id)arg1;
- (id)merge;
- (id)publishers;

@end
