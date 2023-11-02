
@interface SKTaskPlistParser : NSObject <SKTaskDataParser> {
    NSMutableData * _buffer;
    id /* block */  _callback;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _startRange;
}

@property (retain) NSMutableData *buffer;
@property (copy) id /* block */ callback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } startRange;
@property (readonly) Class superclass;

+ (id)plistEndTag;
+ (id)plistStartTag;

- (void).cxx_destruct;
- (id)buffer;
- (id /* block */)callback;
- (id)initWithCallback:(id /* block */)arg1;
- (void)parseData:(id)arg1;
- (void)setBuffer:(id)arg1;
- (void)setCallback:(id /* block */)arg1;
- (void)setStartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })startRange;

@end
