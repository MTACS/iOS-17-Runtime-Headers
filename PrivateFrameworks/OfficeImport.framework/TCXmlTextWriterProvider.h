
@interface TCXmlTextWriterProvider : NSObject {
    struct _xmlTextWriter { } * _textWriter;
}

@property (nonatomic, readonly) struct _xmlTextWriter { }*textWriter;

- (void)dealloc;
- (bool)setUp;
- (bool)setUpWithTextWriter:(struct _xmlTextWriter { }*)arg1;
- (bool)tearDown;
- (struct _xmlTextWriter { }*)textWriter;

@end
