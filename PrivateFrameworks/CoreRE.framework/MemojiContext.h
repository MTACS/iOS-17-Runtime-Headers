
@interface MemojiContext : NSObject {
    struct __CFArray { } * avatars;
    struct __CFDictionary { } * avatarsToRenderers;
    NSArray * viewPoints;
    SCNRendererViewPoint * viewpoint0;
    SCNRendererViewPoint * viewpoint1;
}

@property (readonly) struct __CFArray { }*avatars;
@property (readonly) struct __CFDictionary { }*avatarsToRenderers;
@property (readonly) NSArray *viewPoints;
@property (readonly) SCNRendererViewPoint *viewpoint0;
@property (readonly) SCNRendererViewPoint *viewpoint1;

- (void).cxx_destruct;
- (struct __CFArray { }*)avatars;
- (struct __CFDictionary { }*)avatarsToRenderers;
- (id)init;
- (id)viewPoints;
- (id)viewpoint0;
- (id)viewpoint1;

@end
