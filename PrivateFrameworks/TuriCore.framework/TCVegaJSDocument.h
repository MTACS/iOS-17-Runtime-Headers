
@interface TCVegaJSDocument : NSObject <TCVegaJSDocumentInterface> {
    TCVegaHTMLElement * body;
    TCVegaCGCanvas * canvas;
}

@property (nonatomic, retain) TCVegaHTMLElement *body;
@property (retain) TCVegaCGCanvas *canvas;

- (void).cxx_destruct;
- (id)body;
- (id)canvas;
- (id)createElementWithString:(id)arg1;
- (id)initWithCanvas:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setCanvas:(id)arg1;

@end
