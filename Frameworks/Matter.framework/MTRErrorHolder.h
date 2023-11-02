
@interface MTRErrorHolder : NSObject {
    struct ChipError { 
        unsigned int mError; 
        char *mFile; 
        unsigned int mLine; 
    }  _error;
}

@property (nonatomic, readonly) struct ChipError { unsigned int x1; char *x2; unsigned int x3; } error;

- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })error;
- (id)initWithError:(struct ChipError { unsigned int x1; char *x2; unsigned int x3; })arg1;

@end
