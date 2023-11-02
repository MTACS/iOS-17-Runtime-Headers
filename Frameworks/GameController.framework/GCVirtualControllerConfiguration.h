
@interface GCVirtualControllerConfiguration : NSObject {
    NSSet * _elements;
    bool  _hidden;
}

@property (nonatomic, retain) NSSet *elements;
@property (getter=isHidden, nonatomic) bool hidden;

- (void).cxx_destruct;
- (id)elements;
- (bool)isHidden;
- (void)setElements:(id)arg1;
- (void)setHidden:(bool)arg1;

@end
