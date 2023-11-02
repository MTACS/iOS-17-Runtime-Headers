
@interface BKEnrollTouchIDOperation : BKEnrollOperation {
    struct { 
        int count; 
        int capa; 
        struct { /* ? */ } **items; 
        int unusedImageCount; 
        int componentCount; 
        int componentCapa; 
        int bestComponentIndex; 
        int bestMapiComponentIndex; 
        struct { /* ? */ } **components; 
        short mapiNodeAddedIndex; 
        short mapiNodeRemovedIndex; 
        int updateCount; 
        bool structureIsInconsistent; 
    }  _compSet;
}

@property (nonatomic) <BKEnrollTouchIDOperationDelegate> *delegate;

- (id)createEnrollProgressInfo:(unsigned int)arg1;
- (void)dealloc;
- (void)enrollResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)homeButtonPressed:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1;
- (bool)startWithError:(id*)arg1;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;

@end
