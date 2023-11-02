
@interface PXNewMagazineChunk : NSObject {
    unsigned long long  _height;
    unsigned long long  _numOfRects;
    PXNewMagazineRectArray * _rectsArray;
    long long  _startIndexOfInputs;
    long long  _startY;
}

@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) unsigned long long numOfRects;
@property (nonatomic, readonly) PXNewMagazineRectArray *rectsArray;
@property (nonatomic, readonly) long long startIndexOfInputs;
@property (nonatomic, readonly) long long startY;

- (void).cxx_destruct;
- (unsigned long long)height;
- (id)initWithStartY:(long long)arg1 startIndexOfInputs:(long long)arg2 rectsArray:(id)arg3;
- (unsigned long long)numOfRects;
- (id)rectsArray;
- (long long)startIndexOfInputs;
- (long long)startY;

@end
