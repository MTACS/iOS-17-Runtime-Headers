
@interface NIExportedObjectForwarder : NSObject {
    id  _exportedObject;
}

@property id exportedObject;

- (void).cxx_destruct;
- (id)exportedObject;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithExportedObject:(id)arg1;
- (void)setExportedObject:(id)arg1;

@end
