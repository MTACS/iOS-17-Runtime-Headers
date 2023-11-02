
@interface _MTLObjectWithLabel : NSObject {
    NSString * _label;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _labelLock;
}

@property (copy) NSString *label;

- (void)dealloc;
- (id)init;
- (id)label;
- (id)retainedLabel;
- (void)setLabel:(id)arg1;

@end
