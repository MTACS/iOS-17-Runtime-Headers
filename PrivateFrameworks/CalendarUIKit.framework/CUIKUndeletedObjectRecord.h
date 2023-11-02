
@interface CUIKUndeletedObjectRecord : NSObject {
    EKObject * _undeletedObject;
}

@property (nonatomic, retain) EKObject *undeletedObject;

- (void).cxx_destruct;
- (void)setUndeletedObject:(id)arg1;
- (id)undeletedObject;

@end
