
@interface CNAuthorizationContextTestDouble : NSObject <CNAuthorizationContext> {
    bool  _isAddressingGrammarAccessGranted;
    bool  _isNotesAccessGranted;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isAddressingGrammarAccessGranted;
@property bool isNotesAccessGranted;
@property (readonly) Class superclass;

- (bool)isAddressingGrammarAccessGranted;
- (bool)isNotesAccessGranted;
- (void)setIsAddressingGrammarAccessGranted:(bool)arg1;
- (void)setIsNotesAccessGranted:(bool)arg1;

@end
