
@interface BRLTSTranslator : NSObject {
    NSBundle * _bundle;
    <BRLTTranslatorProtocol> * _translator;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) <BRLTTranslatorProtocol> *translator;

- (void).cxx_destruct;
- (id)brailleForText:(id)arg1 parameters:(id)arg2 locations:(out id*)arg3;
- (id)bundle;
- (id)initWithBundle:(id)arg1;
- (id)textForBraille:(id)arg1 parameters:(id)arg2 locations:(out id*)arg3;
- (id)translator;

@end
