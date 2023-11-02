
@interface CACTextInsertionSpecifier : NSObject {
    AXElement * _axElement;
    NSString * _commandIdentifier;
    NSString * _insertedCategoryID;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _insertedRange;
    NSString * _insertedString;
    NSDictionary * _recognizedParams;
}

@property (retain) AXElement *axElement;
@property (retain) NSString *commandIdentifier;
@property (retain) NSString *insertedCategoryID;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } insertedRange;
@property (retain) NSString *insertedString;
@property (retain) NSDictionary *recognizedParams;

- (void).cxx_destruct;
- (id)axElement;
- (id)commandIdentifier;
- (id)insertedCategoryID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })insertedRange;
- (id)insertedString;
- (id)recognizedParams;
- (void)setAxElement:(id)arg1;
- (void)setCommandIdentifier:(id)arg1;
- (void)setInsertedCategoryID:(id)arg1;
- (void)setInsertedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setInsertedString:(id)arg1;
- (void)setRecognizedParams:(id)arg1;

@end
