
@protocol BRLTTranslationServiceInterface

@required

- (void)brailleForText:(void *)arg1 parameters:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 9: NSString *, BRLTTranslationParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSData *, void*
- (void)loadBrailleBundleForIdentifier:(NSString *)arg1;
- (void)textForBraille:(void *)arg1 parameters:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 9: NSString *, BRLTTranslationParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSData *, void*

@end
