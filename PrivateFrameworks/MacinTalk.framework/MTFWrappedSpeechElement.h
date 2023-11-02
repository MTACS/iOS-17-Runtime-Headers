
@interface MTFWrappedSpeechElement : NSObject {
    int  _NumChildren;
    bool  _unOwned;
    void * _wrapped;
}

@property (nonatomic, readonly) MTFWrappedSpeechElement *FirstChild;
@property (nonatomic, readonly) MTFWrappedSpeechElement *LastChild;
@property (nonatomic, readonly) MTFWrappedSpeechElement *NextSibling;
@property (nonatomic, readonly) int NumChildren;
@property (nonatomic, readonly) MTFWrappedSpeechElement *Parent;
@property (nonatomic, readonly) MTFWrappedSpeechElement *PrevSibling;
@property bool unOwned;
@property void*wrapped;

+ (id)fromCPPElement:(void*)arg1;

- (id)FirstChild;
- (id)LastChild;
- (id)NextSibling;
- (int)NumChildren;
- (id)Parent;
- (id)PrevSibling;
- (void)dealloc;
- (struct MTFESpeechElement { int (**x1)(); short x2; BOOL x3; struct MTFESpeechElement {} *x4; struct MTFESpeechElement {} *x5; struct MTFESpeechElement {} *x6; struct MTFESpeechElement {} *x7; struct MTFESpeechElement {} *x8; }*)elem;
- (id)initWithCppElement:(void*)arg1;
- (void)setUnOwned:(bool)arg1;
- (void)setWrapped:(void*)arg1;
- (bool)unOwned;
- (void*)wrapped;

@end
