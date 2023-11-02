
@interface NonRetainedObjectContainer : NSObject {
    id  _nonRetainedObject;
}

@property (nonatomic) id nonRetainedObject;

- (void).cxx_destruct;
- (id)initWithObject:(id)arg1;
- (id)nonRetainedObject;
- (void)setNonRetainedObject:(id)arg1;

@end
