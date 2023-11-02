
@interface _AddDialogsContextPair : NSObject {
    <SAAceCommand> * _command;
    <NSCopying> * _context;
}

@property (readonly, retain) <SAAceCommand> *command;
@property (readonly, retain) <NSCopying> *context;

- (void).cxx_destruct;
- (id)command;
- (id)context;
- (id)initWithCommand:(id)arg1 context:(id)arg2;

@end
