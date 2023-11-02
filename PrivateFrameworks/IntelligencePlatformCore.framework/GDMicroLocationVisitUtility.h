
@interface GDMicroLocationVisitUtility : NSObject {
    BMStream * _microLocationVisitStream;
}

- (void).cxx_destruct;
- (id)_rawMicroLocationVisitEventPublisherFrom:(id)arg1 to:(id)arg2 reversed:(bool)arg3;
- (id)initWithMicroLocationVisitStream:(id)arg1;
- (id)lastMicroLocationVisitEventPriorTo:(id)arg1;
- (id)microLocationVisitEventPublisherFrom:(id)arg1 to:(id)arg2;

@end
