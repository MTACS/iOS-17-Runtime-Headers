
@interface NSInputStream : NSStream {
    unsigned char  _reserved;
}

@property (readonly) bool hasBytesAvailable;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)inputStreamWithData:(id)arg1;
+ (id)inputStreamWithFileAtPath:(id)arg1;
+ (id)inputStreamWithURL:(id)arg1;

- (struct { long long x1; int x2; })_cfStreamError;
- (unsigned long long)_cfTypeID;
- (void)dealloc;
- (bool)getBuffer:(char **)arg1 length:(unsigned long long*)arg2;
- (bool)hasBytesAvailable;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

- (id)safari_readAllData;
- (bool)safari_readNetworkOrderUInt16:(unsigned short*)arg1;
- (bool)safari_readNetworkOrderUInt32:(unsigned int*)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

+ (id)tsu_inputStreamWithReadChannel:(id)arg1 length:(unsigned long long)arg2;

@end
