
@interface SKGlobalSharedContextRegistry : NSObject

+ (bool)getPrefersOpenGL;
+ (id)globalGLSharedContext;
+ (id)globalMetalDevice;
+ (void)setGlobalGLSharedContext:(id)arg1;
+ (void)setGlobalMetalDevice:(id)arg1;
+ (void)setPrefersOpenGL:(bool)arg1;

@end
