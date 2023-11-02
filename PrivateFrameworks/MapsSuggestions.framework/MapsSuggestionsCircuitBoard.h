
@interface MapsSuggestionsCircuitBoard : NSObject <MapsSuggestionsJSONable> {
    struct _Config { 
        NSArray *circuits; 
        NSArray *triggers; 
        NSArray *conditions; 
    }  _config;
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)addAction:(id)arg1;
- (id)addCircuit:(id)arg1;
- (id)addCondition:(id)arg1;
- (id)addTrigger:(id)arg1;
- (void)awaitQueue;
- (void)connectCondition:(id)arg1 toCircuit:(id)arg2;
- (void)connectTrigger:(id)arg1 toCircuit:(id)arg2;
- (void)disconnectCondition:(id)arg1 fromCircuit:(id)arg2;
- (void)disconnectTrigger:(id)arg1 fromCircuit:(id)arg2;
- (id)init;
- (id)nameForJSON;
- (id)objectForJSON;
- (id)uniqueName;

@end
