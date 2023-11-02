
@interface DNDSContentHandleExceptionalModesBox : NSObject {
    NSArray * _allowed;
    DNDContactHandle * _contactHandle;
    NSArray * _silenced;
}

@property (nonatomic, readonly, copy) NSArray *allowed;
@property (nonatomic, readonly, copy) DNDContactHandle *contactHandle;
@property (nonatomic, readonly, copy) NSArray *silenced;

- (void).cxx_destruct;
- (id)allowed;
- (id)contactHandle;
- (id)initWithContactHandle:(id)arg1 allowed:(id)arg2 silenced:(id)arg3;
- (id)silenced;

@end
