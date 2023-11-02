
@interface ISComponentIdentifier : NSObject {
    void componentIdentifier;
}

@property (nonatomic, readonly) int componentName;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (int)componentName;
- (id)init;
- (id)initWithName:(int)arg1 uuid:(id)arg2;
- (id)uuid;

@end
