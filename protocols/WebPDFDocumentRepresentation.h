
@protocol WebPDFDocumentRepresentation <WebDocumentRepresentation>

@required

+ (Class)_representationClassForWebFrame:(WebFrame *)arg1;
+ (NSArray *)supportedMIMETypes;

@end
