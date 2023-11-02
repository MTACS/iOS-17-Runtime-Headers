
@interface BRCTermDumper : BRCDumper {
    int  _curAttrs;
    int  _curBg;
    int  _curFg;
    bool  _darkMode;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * _file;
    bool  _fileNeedsClosing;
    bool  _isatty;
    bool  _supportsEscapeSequences;
    unsigned long long  _termWidth;
    bool  _useColor;
    unsigned long long  _usedTermWidth;
}

@property (nonatomic, readonly) bool isatty;
@property (nonatomic, readonly) bool supportsEscapeSequences;
@property (nonatomic, readonly) bool useColor;

+ (void)execPagerOnFileFd:(int)arg1;
+ (void)setupPagerForFd:(int)arg1;

- (void)_putsAndCrop:(const char *)arg1 len:(unsigned long long)arg2;
- (unsigned long long)_startInCString:(BOOL)arg1 fgColor:(int)arg2 bgColor:(int)arg3 attr:(int)arg4;
- (int)_transformToDarkMode:(int)arg1;
- (void)cursorDown:(unsigned int)arg1;
- (void)cursorGotoLineStart;
- (void)cursorLeft:(unsigned int)arg1;
- (void)cursorRestore;
- (void)cursorRight:(unsigned int)arg1;
- (void)cursorSave;
- (void)cursorUp:(unsigned int)arg1;
- (void)dealloc;
- (void)endLine;
- (void)eraseEndOfLine;
- (void)eraseLine;
- (void)eraseScreenDown;
- (void)eraseScreenUp;
- (void)eraseStartOfLine;
- (void)forgetRemainingSpace;
- (id)initWithFd:(int)arg1 forceColor:(bool)arg2;
- (id)initWithFd:(int)arg1 forceColor:(bool)arg2 darkMode:(bool)arg3;
- (id)initWithFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 forceColor:(bool)arg2;
- (id)initWithFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 forceColor:(bool)arg2 darkMode:(bool)arg3 closeOnDeinit:(bool)arg4;
- (bool)isatty;
- (void)put:(id)arg1;
- (void)puts:(const char *)arg1;
- (void)puts:(const char *)arg1 len:(unsigned long long)arg2;
- (unsigned long long)remainingSpace;
- (void)reset;
- (void)startFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;
- (void)startNewLine;
- (void)startPager;
- (id)startStringForFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;
- (id)stringForReset;
- (bool)supportsEscapeSequences;
- (bool)useColor;
- (void)write:(const char *)arg1;

@end
