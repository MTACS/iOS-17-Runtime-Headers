
@interface RCPGlobalPositionEvent : NSObject <NSCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    struct { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
    }  _orientation;
    RCPEventSenderProperties * _senderProperties;
    unsigned long long  _timestamp;
    double  _zPosition;
}

@property (readonly) struct CGPoint { double x1; double x2; } location;
@property (readonly) struct { } orientation;
@property (readonly) RCPEventSenderProperties *senderProperties;
@property (readonly) unsigned long long timestamp;
@property (readonly) double zPosition;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithLocation:(struct CGPoint { double x1; double x2; })arg1 zPosition:(double)arg2 orientation:(struct { })arg3 timestamp:(unsigned long long)arg4 senderProperties:(id)arg5;
- (struct CGPoint { double x1; double x2; })location;
- (struct { })orientation;
- (id)senderProperties;
- (unsigned long long)timestamp;
- (double)zPosition;

@end
