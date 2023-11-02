
@interface RBDrawableItem : NSObject {
    struct { 
        float red; 
        float green; 
        float blue; 
        float alpha; 
    }  _clearColor;
    struct { 
        unsigned long long x; 
        unsigned long long y; 
        unsigned long long z; 
    }  _destinationOffset;
    int  _initialState;
    struct objc_ptr<RBDisplayList *> { 
        RBDisplayList *_p; 
    }  _list;
    struct { 
        unsigned long long x; 
        unsigned long long y; 
        unsigned long long width; 
        unsigned long long height; 
    }  _sourceRect;
}

@property (nonatomic) struct { float x1; float x2; float x3; float x4; } clearColor;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } destinationOffset;
@property (nonatomic, retain) RBDisplayList *displayList;
@property (nonatomic) int initialState;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } sourceRect;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { float x1; float x2; float x3; float x4; })clearColor;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })destinationOffset;
- (id)displayList;
- (int)initialState;
- (void)setClearColor:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setDestinationOffset:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setDisplayList:(id)arg1;
- (void)setInitialState:(int)arg1;
- (void)setSourceRect:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })sourceRect;

@end
