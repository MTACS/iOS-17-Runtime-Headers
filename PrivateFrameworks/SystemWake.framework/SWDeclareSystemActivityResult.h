
@interface SWDeclareSystemActivityResult : NSObject {
    unsigned int  _assertionID;
    int  _returnValue;
    int  _systemState;
}

@property (nonatomic, readonly) unsigned int assertionID;
@property (nonatomic, readonly) int returnValue;
@property (nonatomic, readonly) int systemState;

- (unsigned int)assertionID;
- (id)description;
- (id)initWithReturnValue:(int)arg1 assertionID:(unsigned int)arg2 systemState:(int)arg3;
- (int)returnValue;
- (int)systemState;

@end
