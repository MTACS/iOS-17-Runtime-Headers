
@interface BSProtobufSchema : NSObject <BSProtobufSchemaBuilder> {
    long long  _autotagIndex;
    struct _BSProtobufFieldEntry { unsigned int x1; char *x2; long long x3; struct objc_ivar {} *x4; Class x5; Class x6; int (*x7)(); int (*x8)(); struct { long long x_9_1_1; struct _BSProtobufFieldEntry {} **x_9_1_2; struct _BSProtobufFieldEntry {} *x_9_1_3; } x9; bool x10; } * _entries;
    long long  _fieldCount;
    NSMutableData * _memoryData;
    bool  _respondsToDidFinishProtobufDecodingWithError;
    bool  _respondsToInitForProtobufDecoding;
    bool  _respondsToInitProtobufTranslatorForObject;
    Class  _rootClass;
    BSProtobufSchema * _superSchema;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addField:(const char *)arg1;
- (void)addField:(const char *)arg1 allowedClasses:(id)arg2;
- (void)addField:(const char *)arg1 forTag:(long long)arg2;
- (void)addRepeatingField:(const char *)arg1 containsClass:(Class)arg2;
- (void)addRepeatingField:(const char *)arg1 containsClass:(Class)arg2 forTag:(long long)arg3;
- (void)addRepeatingField:(const char *)arg1 containsClasses:(id)arg2;
- (void)dealloc;

@end
