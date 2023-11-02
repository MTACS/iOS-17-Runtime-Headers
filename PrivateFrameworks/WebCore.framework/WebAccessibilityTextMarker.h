
@interface WebAccessibilityTextMarker : NSObject {
    void * _cache;
    struct TextMarkerData { 
        unsigned int treeID; 
        unsigned int objectID; 
        struct Node {} *node; 
        unsigned int offset; 
        int anchorType; 
        bool affinity; 
        unsigned int characterStart; 
        unsigned int characterOffset; 
        bool ignored; 
    }  _textMarkerData;
}

+ (id)startOrEndTextMarkerForRange:(const void*)arg1 isStart:(bool)arg2 cache:(void*)arg3;
+ (id)textMarkerWithCharacterOffset:(struct CharacterOffset { struct Node {} *x1; int x2; int x3; int x4; }*)arg1 cache:(void*)arg2;
+ (id)textMarkerWithVisiblePosition:(void*)arg1 cache:(void*)arg2;

- (id).cxx_construct;
- (void*)accessibilityObject;
- (struct CharacterOffset { struct Node {} *x1; int x2; int x3; int x4; })characterOffset;
- (id)dataRepresentation;
- (id)description;
- (id)initWithData:(id)arg1 accessibilityObject:(id)arg2;
- (id)initWithData:(id)arg1 cache:(void*)arg2;
- (id)initWithTextMarker:(struct TextMarkerData { unsigned int x1; unsigned int x2; struct Node {} *x3; unsigned int x4; int x5; bool x6; unsigned int x7; unsigned int x8; bool x9; }*)arg1 cache:(void*)arg2;
- (bool)isIgnored;
- (struct TextMarkerData { unsigned int x1; unsigned int x2; struct Node {} *x3; unsigned int x4; int x5; bool x6; unsigned int x7; unsigned int x8; bool x9; })textMarkerData;
- (struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> { struct Node {} *x_1_2_1; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; bool x2; })visiblePosition;

@end
