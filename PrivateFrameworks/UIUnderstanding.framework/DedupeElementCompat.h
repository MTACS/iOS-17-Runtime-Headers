
@interface DedupeElementCompat : NSObject {
    void isDuplicate;
    void screenID;
    void uiObject;
}

@property (nonatomic) bool isDuplicate;
@property (nonatomic, readonly) UIObjectCompat *uiObject;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUiObject:(id)arg1 isDuplicate:(bool)arg2 screenID:(id)arg3;
- (bool)isDuplicate;
- (void)setIsDuplicate:(bool)arg1;
- (id)uiObject;

@end
