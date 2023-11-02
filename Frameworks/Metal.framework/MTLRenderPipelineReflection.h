
@interface MTLRenderPipelineReflection : NSObject

@property (readonly) NSArray *fragmentArguments;
@property (readonly) NSArray *fragmentBindings;
@property (readonly) NSArray *meshBindings;
@property (readonly) NSArray *objectBindings;
@property (readonly) NSArray *tileArguments;
@property (readonly) NSArray *tileBindings;
@property (readonly) NSArray *vertexArguments;
@property (readonly) NSArray *vertexBindings;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

@end
