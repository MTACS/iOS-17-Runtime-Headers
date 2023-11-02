
@interface MFFragmentedMessage : NSObject {
    NSArray * _existingParts;
    NSURL * _mainFile;
    struct { 
        long long globalMessageID; 
        unsigned int uid; 
        unsigned int messageSize; 
        long long dateReceived; 
    }  _uidAndSize;
}

@property (nonatomic, readonly, copy) NSArray *existingParts;
@property (nonatomic, readonly) NSURL *mainFile;
@property (nonatomic, readonly) struct { long long x1; unsigned int x2; unsigned int x3; long long x4; } uidAndSize;

- (void).cxx_destruct;
- (id)existingParts;
- (id)mainFile;
- (struct { long long x1; unsigned int x2; unsigned int x3; long long x4; })uidAndSize;

@end
