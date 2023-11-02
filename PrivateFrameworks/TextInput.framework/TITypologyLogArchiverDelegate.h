
@interface TITypologyLogArchiverDelegate : NSObject <NSKeyedArchiverDelegate> {
    NSMutableSet * _objects;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableSet *objects;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (id)init;
- (id)objects;

@end
