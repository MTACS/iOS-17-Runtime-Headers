
@interface WFGetDirectionsContextualAction : WFContextualAction {
    CLLocation * _destination;
    NSString * _destinationName;
    unsigned long long  _navigationType;
}

@property (nonatomic, readonly) CLLocation *destination;
@property (nonatomic, readonly, copy) NSString *destinationName;
@property (nonatomic, readonly) unsigned long long navigationType;
@property (nonatomic, readonly) bool selfPopulatesInput;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)destination;
- (id)destinationName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestination:(id)arg1 name:(id)arg2 type:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)navigationType;
- (bool)showsUserInterfaceWhenRunning;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)getInputWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 26: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'W' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, out long, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (bool)selfPopulatesInput;

@end
