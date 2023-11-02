
@interface OCFontMetadata : NSObject {
    NSArray * _altNames;
    int  _charSet;
    int  _genericFamily;
    OCFontPanose1 * _panose1;
    int  _pitch;
    OCFontSig * _sig;
}

@property (nonatomic, readonly) NSArray *altNames;
@property (nonatomic, readonly) int charSet;
@property (nonatomic, readonly) int genericFamily;
@property (nonatomic, readonly) OCFontPanose1 *panose1;
@property (nonatomic, readonly) int pitch;
@property (nonatomic, readonly) OCFontSig *sig;

+ (id)fontMetadataWithSig:(id)arg1 charSet:(int)arg2 panose1:(id)arg3 pitch:(int)arg4 genericFamily:(int)arg5 altNames:(id)arg6;

- (void).cxx_destruct;
- (id)altNames;
- (int)charSet;
- (int)genericFamily;
- (id)initWithSig:(id)arg1 charSet:(int)arg2 panose1:(id)arg3 pitch:(int)arg4 genericFamily:(int)arg5 altNames:(id)arg6;
- (id)panose1;
- (int)pitch;
- (id)sig;

@end
